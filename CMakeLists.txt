project(cpp_vizsga)
set(SOURCE_FILES DVD.cpp CD.cpp MiniDV.cpp Program.cpp Recorder.cpp VHS.cpp Casette.cpp)
set(HEADER_FILES DVD.h CD.h MiniDV.h Program.h Recorder.h VHS.h Casette.h)
add_executable(cpp_vizsga ${SOURCE_FILES} ${HEADER_FILES})