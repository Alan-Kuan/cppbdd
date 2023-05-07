#include "cppbdd/TaskManager.hpp"
#include <iostream>

namespace cppbdd {

std::array<std::string, 5> Task::task_names_({
    "Scenario:",
    "Given",
    "When",
    "Then",
    "And"
});

void Task::printMessage(void) const {
    std::cout << task_names_[name_] << ' ' << msg_ << std::endl;
}

bool TaskManager::addTask(CallableTask& task) {
    tasks_.emplace_back(new CallableTask(task));
    return true;
}

void TaskManager::runAll(void) {
    for (auto& task : tasks_) {
    }
}

}  // namespace: cppbdd
