#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Engine3D::Renderer3D" for configuration ""
set_property(TARGET Engine3D::Renderer3D APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(Engine3D::Renderer3D PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libRenderer3D.a"
  )

list(APPEND _cmake_import_check_targets Engine3D::Renderer3D )
list(APPEND _cmake_import_check_files_for_Engine3D::Renderer3D "${_IMPORT_PREFIX}/lib/libRenderer3D.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
