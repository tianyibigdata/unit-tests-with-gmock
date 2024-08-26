cc_library(
    name = "interface",
    srcs = [
        "i_random_number_generator.cpp",
    ],
    hdrs = [
        "i_random_number_generator.hpp",
    ],
    features = [
        "treat_warnings_as_errors",
        "strict_warnings",
        "additional_warnings",
    ],
    visibility = [
        "//src:__subpackages__",
    ],
    deps = [
    ],
)

cc_library(
    name = "mock",
    srcs = [
        "i_random_number_generator_mock.cpp",
    ],
    hdrs = [
        "i_random_number_generator_mock.hpp",
    ],
    features = [
        "treat_warnings_as_errors",
        "strict_warnings",
        "additional_warnings",
    ],
    visibility = [
        "//src:__subpackages__",
    ],
    deps = [
        ":interface",
        "@googletest//:gtest",
    ],
)
