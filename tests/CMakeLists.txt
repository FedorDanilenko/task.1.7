include(FetchContent)
FetchContent_Declare(gtest 
    URL https://github.com/google/googletest/archive/release-1.11.0.tar.gz
)

FetchContent_MakeAvailable(gtest)

add_executable(
    unit_tests
    regex_test.cxx
    )

target_link_libraries(unit_tests
    PRIVATE
        my_regex
        gtest_main
    )

include(GoogleTest)
gtest_discover_tests(unit_tests)
