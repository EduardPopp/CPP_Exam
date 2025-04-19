# CMakeList.txt: CMake-Projekt für "Cpp_testing_exam". Schließen Sie die Quelle ein, und definieren Sie
# projektspezifische Logik hier.
#

# Fügen Sie der ausführbaren Datei dieses Projekts eine Quelle hinzu.
add_executable (Cpp_testing_exam "Cpp_testing_exam.cpp" "Cpp_testing_exam.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Cpp_testing_exam PROPERTY CXX_STANDARD 20)
endif()

# TODO: Fügen Sie bei Bedarf Tests hinzu, und installieren Sie Ziele.

#fclean
add_custom_target (fclean
	COMMAND ${CMAKE_COMMAND} --build . --target clean
    COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_BINARY_DIR}
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)

# re
add_custom_target(re
	DEPENDS fclean all
)