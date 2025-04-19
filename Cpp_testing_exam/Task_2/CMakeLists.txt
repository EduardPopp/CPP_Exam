# CMakeList.txt: CMake-Projekt für "Cpp_testing_exam". Schließen Sie die Quelle ein, und definieren Sie
# projektspezifische Logik hier.
#

# Fügen Sie der ausführbaren Datei dieses Projekts eine Quelle hinzu.
add_executable (Task_2 "task2.cpp" "task2.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Task_2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Fügen Sie bei Bedarf Tests hinzu, und installieren Sie Ziele.
