test_main = files('main.cpp')

gtest_dep = gtest.get_variable('gtest_dep')
thread_dep = dependency('threads')

test_deps = [
  gtest_dep,
  thread_dep]

subdir('scenario_manager')
subdir('task_manager')
subdir('cppbdd')
subdir('expect')
