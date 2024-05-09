# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/sg_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/sg_autogen.dir/ParseCache.txt"
  "sg_autogen"
  )
endif()
