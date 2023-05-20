#include "cppbdd/TaskManager.hpp"
#include <iostream>

namespace cppbdd {

array<string, 5> Task::task_names_({
    "Scenario:",
    "Given",
    "When",
    "Then",
    "And"
});

void Task::printMessage(void) const {
    cout << task_names_[name_] << ' ' << msg_ << endl;
}

void TaskManager::runAll(void) {
    size_t exe_times = 1;
    for (const auto& task : tasks_) {
        size_t curr = task->getMinReqExeTimes();
        // all multi-arg tasks must have the same number of test cases
        if (curr > 1) {
            exe_times = curr;
            break;
        }
    }

    for (size_t i = 0 ; i < exe_times; i++) {
        for (const auto& task : tasks_) {
            (*task)();
        }
    }
}

}  // namespace: cppbdd
