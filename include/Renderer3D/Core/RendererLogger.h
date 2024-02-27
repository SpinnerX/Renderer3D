#pragma once
#include <memory>
#include <Renderer3D/Core/core.h>
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

namespace Renderer3D{

	class RENDER_API RendererLogger{
	public:
		RendererLogger() = default;
		~RendererLogger() = default;

		static void Init();

		// @note Checking if the current instance of the logger has been instanced.
		static bool isInit(){
			return (coreLogger == nullptr || clientLogger == nullptr);
		}

		inline static std::shared_ptr<spdlog::logger>& getCoreLogger(){
			if(RendererLogger::isInit()){
				spdlog::log(spdlog::level::critical, "RendererLogger::Init() needs to be called!\n");
				std::terminate();
			}

			return coreLogger;
		}

		inline static std::shared_ptr<spdlog::logger>& getClientLogger(){
			if(RendererLogger::isInit()){
				spdlog::log(spdlog::level::critical, "RendererLogger::Init() needs to be called!\n");
				std::terminate();
			}

			return clientLogger;
		}

	private:
		static std::shared_ptr<spdlog::logger> coreLogger;
		static std::shared_ptr<spdlog::logger> clientLogger;
	};
};

template<typename... T>
inline void coreLogTrace(spdlog::format_string_t<T...> fmt, T&&... args){
	return Renderer3D::RendererLogger::getCoreLogger()->trace(fmt, std::forward<T>(args)...);
}

template<typename... T>
inline void coreLogInfo(spdlog::format_string_t<T...> fmt, T&&... args){
	return Renderer3D::RendererLogger::getCoreLogger()->info(fmt, std::forward<T>(args)...);
}

template<typename... T>
inline void coreLogWarn(spdlog::format_string_t<T...> fmt, T&&... args){
	return Renderer3D::RendererLogger::getCoreLogger()->warn(fmt, std::forward<T>(args)...);
}

template<typename... T>
inline void coreLogError(spdlog::format_string_t<T...> fmt, T&&... args){
	return Renderer3D::RendererLogger::getCoreLogger()->error(fmt, std::forward<T>(args)...);
}

template<typename... T>
inline void coreLogFatal(spdlog::format_string_t<T...> fmt, T&&... args){
	return Renderer3D::RendererLogger::getCoreLogger()->critical(fmt, std::forward<T>(args)...);
}

//@note ------------ Client logs ------------
template<typename... T>
inline void clientLogTrace(spdlog::format_string_t<T...> fmt, T &&...args) {
    Renderer3D::RendererLogger::getClientLogger()->trace(fmt, std::forward<T>(args)...);
}

template<typename... T>
inline void clientLogInfo(spdlog::format_string_t<T...> fmt, T &&...args) {
    Renderer3D::RendererLogger::getClientLogger()->info(fmt, std::forward<T>(args)...);
}

template<typename... T>
inline void clientLogWarn(spdlog::format_string_t<T...> fmt, T &&...args) {
    Renderer3D::RendererLogger::getClientLogger()->warn(fmt, std::forward<T>(args)...);
}

template<typename... T>
inline void clientLogError(spdlog::format_string_t<T...> fmt, T &&...args) {
    Renderer3D::RendererLogger::getClientLogger()->error(fmt, std::forward<T>(args)...);
}

template<typename... T>
inline void clientLogFatal(spdlog::format_string_t<T...> fmt, T &&...args) {
    Renderer3D::RendererLogger::getClientLogger()->critical(fmt, std::forward<T>(args)...);
}
