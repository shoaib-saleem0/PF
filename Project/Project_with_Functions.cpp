#include <iostream>
#include <conio.h>
using namespace std;

// Global Data
const int totalTasks = 100;
int count = 5;
int employeeCount = 2;
int notesNumber = 0;

string tasks[totalTasks] = {" ", "EditVideo", "LogoDesign", "SetupPC_OS", "Testing_OS"};
string titleA[totalTasks] = {" ", "Market", "Brand", "IT", "QA"};
int deadlineA[totalTasks] = {0, 12, 3, 20, 2};
string priorityA[totalTasks] = {" ", "Medium", "High", "Low", "null"};
string statusA[totalTasks] = {" ", "InProgress", "Pending", "Completed", "Pending"};
string notesA[totalTasks] = {" ", "do it on C++"};
string employees[10] = {" ", "Muhammad", "Shoaib", "Saleem"};

int assignedTo[totalTasks] = {0, 1, 2, 1, 2};

void header();
void managerMenu();
void detailsView();
void detailsInput(int Value);
void deleteTask(int select);
void sortByDeadline();
int taskSelect();
void employeesTasks(int employeeSelect);
void workersMenu();
void employeeList();
void projectNotes();
void projectDeadlines(int employeeSelect);
void employeesNotes(int employeeSelect);
void countMytasks(int employeeSelect);
void completedTasks(int employeeSelect);
void createProject();
void managerOptions();
void updateTask();
void projectUpdate();
void assignProject();
void addEmployee();
void addNote();
void employeeOptions(int employeeSelect);
void employeeAssignedTasks(int employeeSelect);
void employeeMarkasComplete(int employeeSelect);
void employeeDeadlines(int employeeSelect);
void employeeSearchTask(int employeeSelect);
void employeeStatusUpdate(int employeeSelect);
void employeeAddedNotes(int employeeSelect);
void employeePendingTasks(int employeeSelect);
void employeeCompletedTasks(int employeeSelect);

main()
{

    while (true)
    {
        system("cls");

        header();

        int userOption;
        cin >> userOption;
        system("cls");
        if (userOption == 1)
        {
            // Manager Options
            for (int i = 0; i < 4; i++)
            {
                if (i < 3)
                {
                    cout << "Enter Credentials: \n";
                    cout << "Enter Username: ";
                    string userName;
                    cin >> userName;

                    cout << "Enter Password: ";
                    string pass;
                    cin >> pass;
                    system("cls");
                    if (userName == "admin" && pass == "123")
                    {
                        managerOptions();
                        break;
                    }
                    else
                    {
                        cout << "Username or password is wrong!\n";
                    }
                }
                else
                {
                    cout << "TOO MANY ATTEMPTS! \n";
                    cout << "Press any key to continue!";
                    getch();
                }
            }
        }

        else if (userOption == 2)
        { // Employee Menu
            cout << "----------EMPLOYEE MENU----------\n";

            employeeList();
            cout << "Choose Who you are: (1-" << employeeCount << "): ";
            int employeeSelect;
            cin >> employeeSelect;
            employeeOptions(employeeSelect);
        }
        else if (userOption == 3)
        {
            // Program Ends
            cout << "Program Ended\n";
            cout << "Thanks for using Project Management System.\n";
            cout << "HOPE YOU ENJOY YOUR DAY :)\n";
            cout << "Press any key to continue!";
            getch();
            break;
        }
        else
        {
            // Invalid Option
            cout << "Invalid Option! Please select correct option (1-3).\n";
            cout << "press any key to continue!";
            getch();
        }
    }
}
void detailsView()
{
    cout << "Sr\tName\tDeadline(in weeks)\tTask\t\tPriority\tStatus\n";
    for (int i = 1; i < count; i++)
    {
        if (deadlineA[i] != 0)
        {
            cout << i << "\t" << titleA[i] << "\t\t" << deadlineA[i] << "\t\t" << tasks[i] << "\t" << priorityA[i] << "\t\t" << statusA[i] << endl;
        }
    }
}
void detailsInput(int Value)
{

    cout << "Enter details about Project: \n";
    cout << "Enter Title: ";
    string title;
    cin >> title;

    cout << "Enter Task: ";
    string task;
    cin >> task;

    cout << "Enter Deadline: ";
    int deadline;
    cin >> deadline;

    cout << "Enter Priority: ";
    string priority;
    cin >> priority;

    cout << "Enter Status: ";
    string status;
    cin >> status;
    system("cls");
    cout << "ALL DONE!\n";
    cout << "Press any key to continue! ";
    getch();

    tasks[Value] = task;
    titleA[Value] = title;
    deadlineA[Value] = deadline;
    priorityA[Value] = priority;
    statusA[Value] = status;
}
void deleteTask(int select)
{
    tasks[select] = " ";
    titleA[select] = " ";
    deadlineA[select] = 0;
    priorityA[select] = " ";
    statusA[select] = " ";

    for (int i = select; i < count; i++)
    {
        tasks[i] = tasks[i + 1];
        titleA[i] = titleA[i + 1];
        deadlineA[i] = deadlineA[i + 1];
        priorityA[i] = priorityA[i + 1];
        statusA[i] = statusA[i + 1];
    }
}
int taskSelect()
{
    int select;
    cout << "Select Project (1-" << count - 1 << "): ";
    cin >> select;

    while (select <= 0 || select >= count || deadlineA[select] == 0)
    {
        cout << "Invalid selection! Try again: ";
        cin >> select;
    }
    return select;
}
void updateProject(int select)
{
    cout << "Enter details about Project to Update: \n";
    cout << "Enter Title: ";
    string title;
    cin >> title;

    cout << "Enter Task: ";
    string task;
    cin >> task;

    cout << "Enter Deadline: ";
    int deadline;
    cin >> deadline;

    cout << "Enter Priority: ";
    string priority;
    cin >> priority;

    cout << "Enter Status: ";
    string status;
    cin >> status;
    system("cls");
    cout << "Project Updated Successfully!\n";
    cout << "Press any key to continue! ";
    getch();

    tasks[select] = task;
    titleA[select] = title;
    deadlineA[select] = deadline;
    priorityA[select] = priority;
    statusA[select] = status;
}
void employeesTasks(int employeeSelect)
{
    cout << "Sr\tName\tDeadline(in weeks)\tTask\t\tPriority\tStatus\n";
    for (int i = 1; i < count; i++)
    {
        if (assignedTo[i] == employeeSelect)
        {
            if (deadlineA[i] != 0)
            {
                cout << i << "\t" << titleA[i] << "\t\t" << deadlineA[i] << "\t\t" << tasks[i] << "\t" << priorityA[i] << "\t\t" << statusA[i] << endl;
            }
        }
    }
}
void header()
{
    cout << "----------------------------------------------\n";
    cout << "----------------------------------------------\n";
    cout << "--------------PROJECT MANAGER-----------------\n";
    cout << "----------------------------------------------\n";
    cout << "----------------------------------------------\n";

    cout << endl
         << endl
         << endl;
    cout << "-----------------USERS---------------------\n";
    cout << endl;

    cout << "1.MANAGER\n";
    cout << "2.EMPLOYEE\n";
    cout << "3.EXIT!\n";
    cout << "Select an option: ";
}
void managerMenu()
{
    cout << "--------MANAGER-MENU---------\n";
    cout << "1.Create Project\n";
    cout << "2.Update Task\n";
    cout << "3.Update Project\n";
    cout << "4.Sort by Deadline\n";
    cout << "5.View list\n";
    cout << "6.Delete project\n";
    cout << "7.Assign Project\n";
    cout << "8.Add Employee\n";
    cout << "9.View Employee list\n";
    cout << "10.Add/Update notes\n";
    cout << "11.View Notes\n";
    cout << "12.Exit\n";
    cout << "Select an option (1 - 9): ";
}
void workersMenu()
{
    cout << "Choose what to do: \n";
    cout << "1.View Assigned project\n";
    cout << "2.Update Status\n";
    cout << "3.Mark Complete\n";
    cout << "4.View Deadlines\n";
    cout << "5.Search task\n";
    cout << "6.Show Number of projects\n";
    cout << "7.View Completed Tasks\n";
    cout << "8.View Pending Tasks\n";
    cout << "9.View Added Notes\n";
    cout << "10.Exit\n";

    cout << "Select option (1-7): ";
}

void projectNotes()
{
    cout << "Sr\tName\tDeadline(in weeks)\t\tNOTE\n";
    for (int i = 1; i < count; i++)
    {
        if (deadlineA[i] != 0)
        {
            cout << i << "\t" << titleA[i] << "\t\t" << deadlineA[i] << "\t\t\t" << notesA[i] << endl;
        }
    }
}
void projectDeadlines(int employeeSelect)
{
    cout << "Sr\tDeadline(in weeks)\n";
    for (int i = 1; i < count; i++)
    {
        if (assignedTo[i] == employeeSelect)
        {
            if (deadlineA[i] != 0)
            {
                cout << i << "\t" << deadlineA[i] << endl;
            }
        }
    }
}
void employeesNotes(int employeeSelect)
{
    cout << "Sr\tName\tDeadline(in weeks)\t\tNOTE\n";
    for (int i = 1; i < count; i++)
    {
        if (assignedTo[i] == employeeSelect)
        {
            if (deadlineA[i] != 0)
            {
                cout << i << "\t" << titleA[i] << "\t\t" << deadlineA[i] << "\t\t\t" << notesA[i] << endl;
            }
        }
    }
}
void sortByDeadline()
{
    for (int i = 1; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (deadlineA[i] > deadlineA[j])
            {
                int deadtemp = deadlineA[i];
                deadlineA[i] = deadlineA[j];
                deadlineA[j] = deadtemp;

                string taskTemp = tasks[i];
                tasks[i] = tasks[j];
                tasks[j] = taskTemp;

                string titleTemp = titleA[i];
                titleA[i] = titleA[j];
                titleA[j] = titleTemp;

                string priorityTemp = priorityA[i];
                priorityA[i] = priorityA[j];
                priorityA[j] = priorityTemp;

                string statustemp = statusA[i];
                statusA[i] = statusA[j];
                statusA[j] = statustemp;
            }
        }
    }
}
void employeeList()
{
    cout << "EMPLOYEES LIST\n";
    for (int i = 1; i <= employeeCount; i++)
    {
        cout << i << " " << employees[i] << endl;
    }
}
void countMytasks(int employeeSelect)
{
    int tasksNumber;
    for (int i = 0; i < count; i++)
    {
        if (assignedTo[i] == employeeSelect)
        {
            tasksNumber++;
        }
    }
    cout << "The number of tasks assigned to you are: " << tasksNumber << endl;
    cout << "Press any key to continue!";
    getch();
    tasksNumber = 0;
}
void completedTasks(int employeeSelect)
{
    int completedTasks = 0;
    cout << "Sr\tName\tDeadline(in weeks)\tTask\t\tPriority\tStatus\n";
    for (int i = 1; i < count; i++)
    {
        if (assignedTo[i] == employeeSelect)
        {
            if (statusA[i] == "Completed" || statusA[i] == "completed" || statusA[i] == "complete" || statusA[i] == "Complete" || statusA[i] == "done" || statusA[i] == "Done")
            {
                if (deadlineA[i] != 0)
                {

                    cout << i << "\t" << titleA[i] << "\t\t" << deadlineA[i] << "\t\t" << tasks[i] << "\t" << priorityA[i] << "\t\t" << statusA[i] << endl;
                    completedTasks++;
                }
            }
        }
    }
}
void createProject()
{
    system("cls");

    detailsInput(count);

    count++;
}
void managerOptions()
{

    int managerOption;

    while (true)
    {
        system("cls");

        managerMenu();

        cin >> managerOption;

        if (managerOption == 1)
        {
            // Create Project Code
            createProject();
        }
        else if (managerOption == 2)
        {
            // update Task Code
            system("cls");

            updateTask();
        }
        else if (managerOption == 3)
        {
            // Update Project
            system("cls");
            projectUpdate();
        }
        else if (managerOption == 4)
        {
            // Sort by Deadline Code

            sortByDeadline();

            cout << "Projects in ascending order: \n";

            detailsView();

            cout << "press any key to continue! ";
            getch();
        }

        else if (managerOption == 5)
        {
            // View Project list
            system("cls");
            cout << "The list of Projects is: \n\n";

            detailsView();

            cout << "Press any to continue ";
            getch();
        }
        else if (managerOption == 6)
        {
            // Delete Task Code
            system("cls");
            detailsView();

            cout << "Select Project to delete: \n";
            int select = taskSelect();

            deleteTask(select);

            cout << "Task Deleted Successfully!\n";
            cout << "Press any key to continue!";
            getch();
        }
        else if (managerOption == 7)
        {
            // Assign Project Code
            system("cls");
            assignProject();
        }
        else if (managerOption == 8)
        {
            // Add Employee Code
            system("cls");
            addEmployee();
        }
        else if (managerOption == 9)
        { // Employees list code
            system("cls");

            employeeList();

            cout << "Press any key to continue! ";
            getch();
        }
        else if (managerOption == 10)
        {
            // Add Note Code

            addNote();
        }
        else if (managerOption == 11)
        {
            cout << "Different Notes added with project are: \n";

            projectNotes();

            cout << "Press any key to continue!";
            getch();
        }

        else if (managerOption == 12)
        {
            break;
        }
    }
}
void updateTask()
{
    detailsView();

    int select = taskSelect();

    cout << "Enter Task: ";
    string task;
    cin.ignore();
    getline(cin, task);

    tasks[select] = task;
}
void projectUpdate()
{
    cout << "Select Project Update: \n";

    detailsView();

    int select = taskSelect();

    cout << "\n";

    detailsInput(select);
}
void assignProject()
{
    cout << "Select Project You Wanna Assign: \n\n";

    detailsView();
    int select = taskSelect();

    system("cls");

    cout << "Select employee you wanna assign project to: \n";

    employeeList();

    cout << "Choose Employee: (1-" << employeeCount << ")";
    int employeeSelect;
    cin >> employeeSelect;

    assignedTo[select] = employeeSelect;

    cout << "Project Successfully Assigned!";
}
void addEmployee()
{
    cout << "Enter Details About Employee: \n";

    cout << "Enter Employee Name: ";
    string employee;
    cin >> employee;

    system("cls");

    employeeCount++;
    employees[employeeCount] = employee;

    cout << "Employee Added Successfully!";
}
void addNote()
{
    cout << "Select Project you wanna add or update note of: \n";

    projectNotes();

    int select = taskSelect();

    cout << "\n";

    cout << "Enter details about Note to Update: \n";
    cout << "Enter Note: ";
    cin.ignore();
    getline(cin, notesA[select]);
    notesNumber++;

    cout << "NOTE ADDED SUCCESSFULLY!\n";
    cout << "Press any key to continue\n";
    getch();
}
void employeeOptions(int employeeSelect)
{
    while (true)
    {

        system("cls");
        cout << "WELCOME " << employees[employeeSelect] << "!!!" << endl
             << endl;

        // Worker Options

        workersMenu();

        int employeOption;
        cin >> employeOption;

        if (employeOption == 1)
        { // Assigned Tasks
            employeeAssignedTasks(employeeSelect);
        }
        else if (employeOption == 2)
        { // Task Status Update
            employeeStatusUpdate(employeeSelect);
        }
        else if (employeOption == 3)
        {
            // Marks Project as complete
            employeeMarkasComplete(employeeSelect);
        }
        else if (employeOption == 4)
        {
            // Show deadlines

            employeeDeadlines(employeeSelect);
        }
        else if (employeOption == 5)
        { // Search by task
            employeeSearchTask(employeeSelect);
        }
        else if (employeOption == 6)
        {
            // Number of tasks
            countMytasks(employeeSelect);
        }
        else if (employeOption == 7)
        {
            // Completed Tasks
            employeeCompletedTasks(employeeSelect);
        }
        else if (employeOption == 8)
        {
            // Pending Tasks
            employeePendingTasks(employeeSelect);
        }
        else if (employeOption == 9)
        {
            // Added Notes
            employeeAddedNotes(employeeSelect);
        }
        else if (employeOption == 10)
        {
            break;
        }
    }
}
void employeeAssignedTasks(int employeeSelect)
{
    cout << "Your Assigned Tasks:\n";

    employeesTasks(employeeSelect);

    cout << "Press any key to continue!";
    getch();
}
void employeeStatusUpdate(int employeeSelect)
{
    cout << "Your Projects are\n";
    employeesTasks(employeeSelect);

    cout << "Select Project you wanna update Status of: ";

    int select = taskSelect();

    cout << "Enter Status: ";
    string status;
    cin.ignore();
    getline(cin, status);
    statusA[select] = status;
}
void employeeMarkasComplete(int employeeSelect)
{
    cout << "Your Projects are\n";

    employeesTasks(employeeSelect);

    cout << "Select Project you mark as complete: ";

    int select = taskSelect();

    statusA[select] = {"Complete"};

    cout << "Project is Marked as complete\n";
    cout << "Press any key to continue";
    getch();
}
void employeeDeadlines(int employeeSelect)
{
    cout << "Deadlines of your projects are: \n";

    projectDeadlines(employeeSelect);

    cout << "press any key to continue!";
    getch();
}
void employeeSearchTask(int employeeSelect)
{
    cout << "Enter Task you wanna search: ";
    string task;
    cin.ignore();
    getline(cin, task);

    for (int i = 1; i <= count; i++)
    {
        if (assignedTo[i] == employeeSelect)
        {
            if (tasks[i] == task)
            {
                if (deadlineA[i] != 0)
                {
                    cout << "Sr\tName\tDeadline(in weeks)\tTask\t\tPriority\tStatus\n";
                    cout << i << "\t" << titleA[i] << "\t\t" << deadlineA[i] << "\t\t" << tasks[i] << "\t" << priorityA[i] << "\t\t" << statusA[i] << endl;
                    break;
                }
            }
        }
        else if (i == count)
        {
            cout << "TASK NOT FOUND!\n";
        }
    }

    cout << "Press any key to continue!";
    getch();
}
void employeeCompletedTasks(int employeeSelect)
{
    completedTasks(employeeSelect);
    if (completedTasks == 0)
    {
        cout << "No Completed Projects Found!\n";
    }
    cout << "press any key to continue!";
    getch();
}
void employeePendingTasks(int employeeSelect)
{

    int PendingTasks = 0;
    cout << "Sr\tName\tDeadline(in weeks)\tTask\t\tPriority\tStatus\n";
    for (int i = 1; i < count; i++)
    {
        if (assignedTo[i] == employeeSelect)
        {
            if (statusA[i] == "Pending" || statusA[i] == "Working" || statusA[i] == "InProgress" || statusA[i] == "pending" || statusA[i] == "inprogress" || statusA[i] == "in progress")
            {
                if (deadlineA[i] != 0)
                {

                    cout << i << "\t" << titleA[i] << "\t\t" << deadlineA[i] << "\t\t" << tasks[i] << "\t" << priorityA[i] << "\t\t" << statusA[i] << endl;
                    PendingTasks++;
                }
            }
        }
    }
    if (PendingTasks == 0)
    {
        cout << "No Pending Projects Found!\n";
    }
    cout << "press any key to continue!";
    getch();
}
void employeeAddedNotes(int employeeSelect)
{
    cout << "Different Notes added with project are: \n";

    employeesNotes(employeeSelect);

    cout << "Press any key to continue!";
    getch();
}