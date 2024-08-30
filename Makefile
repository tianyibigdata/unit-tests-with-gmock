run:
	bazel run @hedron_compile_commands//:refresh_all -- --config=spp_host_clang

build:
	bazel build --config=spp_host_clang //src/random_number_generator/details:unit_tests

test:
	bazel test --config=spp_host_clang //src/random_number_generator/details:unit_tests
