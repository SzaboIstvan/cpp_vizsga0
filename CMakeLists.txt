project(cpp_vizsga)
set(SOURCE_FILES DVD.cpp CD.cpp MiniD.cpp Program.cpp Recorder.cpp VHS.cpp)
set(HEADER_FILES DVD.h CD.h MiniD.h Program.h Recorder.h VHS.h)
add_executable(cpp_vizsga ${SOURCE_FILES} ${HEADER_FILES})