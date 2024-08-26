# config_setting(
#     name = "spp_host_clang",
#     constraint_values = [
#         "@bazel_tools//tools/cpp:clang",
#         "@platforms//cpu:x86_64",
#         "@platforms//os:linux",
#     ],
#     visibility = ["//visibility:private"],
# )

cc_library(
    name = "random_number_generator",
    srcs = [
        "random_number_generator.cpp",
    ],
    hdrs = [
        "random_number_generator.hpp",
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
        "//src/random_number_generator:interface",
    ],
)

cc_test(
    name = "unit_tests",
    srcs = [
        "random_number_generator_test.cpp",
    ],
    features = [
        "treat_warnings_as_errors",
        "strict_warnings",
        "additional_warnings",
    ],
    tags = ["unit"],
    visibility = ["//src/random_number_generator:__pkg__"],
    includes = ["src/random_number_generator"],
    deps = [
        "//src/random_number_generator:interface",
        "//src/random_number_generator:mock",
        "//src/random_number_generator/details:random_number_generator",
    ],
)
