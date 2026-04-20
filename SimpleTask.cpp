#include <iostream>
#include <fstream> //allows the program to read and writes the file
#include <vector>
#include <string>

using namespace std;

//data Structure 
struct Task {
    string title;
    bool done; // finished (true) or pending (false)
};

//global variables 
vector<Task> tasks; 
const string FILE_NAME = "tasks.txt";//defines the name of the file kung saan mag s-save and load ang program

//file handling or additional features
void loadTasks() {
    ifstream file(FILE_NAME); // (Input File Stream)reads information from the file
    string title;
    bool done;
    
     
    while (file >> done) { //reads data from the file and stores it into done
        file.ignore(); 
        getline(file, title); 
        tasks.push_back({title, done});// mag a-add ng new element sa tasks container. (.push)
    }
    file.close();
}

void saveTasks() {
    ofstream file(FILE_NAME); //(Output File Stream)creates or writes information on the file
    for (int i = 0; i < tasks.size(); i++) {
        file << tasks[i].done << " " << tasks[i].title << "\n"; // Saves as: [Status of task] [Task Title]
    }
    file.close();
}

//features 
void viewTasks() {
    cout << "\n--- To-Do List ---\n";
    if (tasks.empty()) {
        cout << "Your list is empty!\n";
        return;
    }
    
    for (int i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". ";
        if (tasks[i].done) {
            cout << "[X] ";//Completed or finished
        } else {
            cout << "[ ] ";//pending task
        }
        cout << tasks[i].title << "\n";
    }
}

void addTask() {
    cout << "Enter new task: ";
    string title;
    cin.ignore(); 
    getline(cin, title);
    
    tasks.push_back({title, false});//mag a-add ng task na pending (false)
    cout << "Task added!\n";
}

void markDone() {
    viewTasks(); //Papakita muna task list bago pumili ng number 
    if (tasks.empty()) return;

    cout << "Enter task number to mark as done: ";
    int num;
    cin >> num;
    
    if (num > 0 && num <= tasks.size()) {
        tasks[num - 1].done = true; 
        cout << "Task completed!\n";
    } else {
        cout << "Invalid number.\n";
    }
}

void deleteTask() {
    viewTasks();
    if (tasks.empty()) return;

    cout << "Enter task number to be deleted: ";
    int num;
    cin >> num;
    
    if (num > 0 && num <= tasks.size()) {
        tasks.erase(tasks.begin() + (num - 1)); /*sample solution: 1. acp, 2. dsa, 3. pathfit... to remove the task 2.
                                                2>0 && 2<=tasks.size(3) {(tasks.begin(0) + (2-1))} = index 1 and is 
                                                equivalent to 2nd item on the list...tasks.erase*/
        cout << "Task deleted!\n";
    } else {
        cout << "Invalid number.\n";
    }
}

// Menu 
int main() {
    loadTasks();
    int choice = 0;

    while (choice != 5) {
        cout << "\n=== SimpleTask ===\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Done\n";
        cout << "4. Delete Task\n";
        cout << "5. Save & Exit\n";
        cout << "Choose (1-5): ";
        cin >> choice;

        if (choice == 1) addTask();
        else if (choice == 2) viewTasks();
        else if (choice == 3) markDone();
        else if (choice == 4) deleteTask();
        else if (choice == 5) {
            saveTasks();
            cout << "Your tasks have been saved!!\n";
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}