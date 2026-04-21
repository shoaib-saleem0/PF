#include <iostream>
#include <conio.h>
using namespace std;
main()
{

    int totalTasks = 100;
    int count = 5;
    int employeeCount = 2;

    string tasks[totalTasks] = {" ", "EditVideo", "LogoDesign", "SetupPC_OS", "Testing_OS"};
    string titleA[totalTasks] = {" ", "Market", "Brand", "IT", "QA"};
    int deadlineA[totalTasks] = {0, 12, 3, 20, 2};
    string priorityA[totalTasks] = {" ", "Medium", "High", "Low", "null"};
    string statusA[totalTasks] = {" ", "InProgress", "Pending", "Done", "Pending"};
    string employees[10] = {" ", "Muhammad", "Shoaib", "Saleem"};

    int assignedTo[totalTasks] = {0, 1, 2, 1, 2};

    while (true)
    {
        system("cls");
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
                        int managerOption;

                        while (true)
                        {
                            system("cls");
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
                            cout << "10.Exit\n";
                            cout << "Select an option (1 - 9): ";

                            cin >> managerOption;

                            if (managerOption == 1)
                            {
                                // Create Project Code
                                system("cls");

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

                                tasks[count] = task;
                                titleA[count] = title;
                                deadlineA[count] = deadline;
                                priorityA[count] = priority;
                                statusA[count] = status;

                                count++;
                            }
                            else if (managerOption == 2)
                            {
                                // update Task Code
                                system("cls");
                                cout << "Sr\tName\tDeadline(in weeks)\tTask\t\tPriority\tStatus\n";
                                for (int i = 1; i < count; i++)
                                {
                                    if (deadlineA[i] != 0)
                                    {
                                        cout << i << "\t" << titleA[i] << "\t\t" << deadlineA[i] << "\t\t" << tasks[i] << "\t" << priorityA[i] << "\t\t" << statusA[i] << endl;
                                    }
                                }
                                int select;
                                cout << "Select Project: ";
                                cin >> select;

                                cout << "Enter Task: ";
                                string task;
                                cin.ignore();
                                getline(cin, task);

                                tasks[select] = task;
                            }
                            else if (managerOption == 3)
                            {
                                // Update Project
                                system("cls");
                                cout << "Select Project Update: \n";

                                cout << "Sr\tName\tDeadline(in weeks)\tTask\t\tPriority\tStatus\n";
                                for (int i = 1; i < count; i++)
                                {
                                    if (deadlineA[i] != 0)
                                    {
                                        cout << i << "\t" << titleA[i] << "\t\t" << deadlineA[i] << "\t\t" << tasks[i] << "\t" << priorityA[i] << "\t\t" << statusA[i] << endl;
                                    }
                                }
                                int select;
                                cout << "Select Project: ";
                                cin >> select;

                                cout << "\n";

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
                            else if (managerOption == 4)
                            {
                                // Sort by Deadline Code
                                for (i = 1; i < count; i++)
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
                                cout << "Projects in ascending order: \n";

                                cout << "Sr\tName\tDeadline(in weeks)\tTask\t\tPriority\tStatus\n";
                                for (int i = 1; i < count; i++)
                                {
                                    if (deadlineA[i] != 0)
                                    {
                                        cout << i << "\t" << titleA[i] << "\t\t" << deadlineA[i] << "\t\t" << tasks[i] << "\t" << priorityA[i] << "\t\t" << statusA[i] << endl;
                                    }
                                }
                                cout << "press any key to continue! ";
                                getch();
                            }

                            else if (managerOption == 5)
                            {
                                // View Project list
                                system("cls");
                                cout << "The list of Projects is: \n\n";

                                cout << "Sr\tName\tDeadline(in weeks)\tTask\t\tPriority\tStatus\n";
                                for (int i = 1; i < count; i++)
                                {
                                    if (deadlineA[i] != 0)
                                    {
                                        cout << i << "\t" << titleA[i] << "\t\t" << deadlineA[i] << "\t\t" << tasks[i] << "\t" << priorityA[i] << "\t\t" << statusA[i] << endl;
                                    }
                                }

                                cout << "Press any to continue ";
                                getch();
                            }
                            else if (managerOption == 6)
                            {
                                // Delete Task Code
                                system("cls");
                                cout << "Sr\tName\tDeadline(in weeks)\tTask\t\tPriority\tStatus\n";
                                for (int i = 1; i < count; i++)
                                {
                                    if (deadlineA[i] != 0)
                                    {
                                        cout << i << "\t" << titleA[i] << "\t\t" << deadlineA[i] << "\t\t" << tasks[i] << "\t" << priorityA[i] << "\t\t" << statusA[i] << endl;
                                    }
                                }
                                int select;
                                cout << "Select Project to delete: ";
                                cin >> select;

                                tasks[select] = " ";
                                titleA[select] = " ";
                                deadlineA[select] = 0;
                                priorityA[select] = " ";
                                statusA[select] = " ";

                                for (i = select; i < count; i++)
                                {
                                    tasks[i] = tasks[i + 1];
                                    titleA[i] = titleA[i + 1];
                                    deadlineA[i] = deadlineA[i + 1];
                                    priorityA[i] = priorityA[i + 1];
                                    statusA[i] = statusA[i + 1];
                                }
                                cout << "Task Deleted Successfully!\n";
                                cout << "Press any key to continue!";
                                getch();
                            }
                            else if (managerOption == 7)
                            {
                                // Assign Project Code
                                system("cls");
                                cout << "Select Project You Wanna Assign: \n\n";
                                cout << "Sr\tName\tDeadline(in weeks)\tTask\t\tPriority\tStatus\n";
                                for (int i = 1; i < count; i++)
                                {
                                    if (deadlineA[i] != 0)
                                    {
                                        cout << i << "\t" << titleA[i] << "\t\t" << deadlineA[i] << "\t\t" << tasks[i] << "\t" << priorityA[i] << "\t\t" << statusA[i] << endl;
                                    }
                                }
                                cout << "Select Project you wanna assign: ";

                                int select;
                                cin >> select;
                                system("cls");

                                cout << "Select employee you wanna assign project to: \n";

                                for (int i = 1; i <= employeeCount; i++)
                                {
                                    cout << i << " " << employees[i] << endl;
                                }
                                cout << "Choose Employee: (1-" << employeeCount << ")";
                                int employeeSelect;
                                cin >> employeeSelect;

                                assignedTo[select] = employeeSelect;

                                cout << "Project Successfully Assigned!";
                            }
                            else if (managerOption == 8)
                            {
                                // Add Employee Code
                                system("cls");
                                cout << "Enter Details About Employee: \n";

                                cout << "Enter Employee Name: ";
                                string employee;
                                cin >> employee;
                                system("cls");

                                employeeCount++;
                                employees[employeeCount] = employee;

                                cout << "Employee Added Successfully!";
                            }
                            else if (managerOption == 9)
                            { // Employees list code
                                system("cls");
                                cout << "EMPLOYEES LIST\n";
                                for (int i = 1; i <= employeeCount; i++)
                                {
                                    cout << i << " " << employees[i] << endl;
                                }

                                cout << "Press any key to continue! ";
                                getch();
                            }

                            else if (managerOption == 10)
                            {
                                break;
                            }
                        }
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
            cout << "EMPLOYEES LIST\n";
            for (int i = 1; i <= employeeCount; i++)
            {
                cout << i << " " << employees[i] << endl;
            }
            cout << "Choose Who you are: (1-" << employeeCount << "): ";
            int employeeSelect;
            cin >> employeeSelect;
            while (true)
            {

                system("cls");
                cout << "WELCOME " << employees[employeeSelect] << "!!!" << endl
                     << endl;
                // Worker Options
                cout << "Choose what to do: \n";
                cout << "1.View Assigned project\n";
                cout << "2.Update Status\n";
                cout << "3.Mark Complete\n";
                cout << "4.View Deadlines\n";
                cout << "5.Search task\n";
                cout << "6.Show Number of projects\n";
                cout << "7.Exit\n";

                cout << "Select option (1-7): ";

                int employeOption;
                cin >> employeOption;

                if (employeOption == 1)
                { // Assigned Tasks
                    cout << "Your Assigned Tasks:\n";
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
                    cout << "Press any key to continue!";
                    getch();
                }
                else if (employeOption == 2)
                { // Task Status Update
                    cout << "Your Projects are\n";
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

                    cout << "Select Project you wanna update Status of: ";

                    int select;
                    cin >> select;

                    cout << "Enter Status: ";
                    string status;
                    cin.ignore();
                    getline(cin, status);
                    statusA[select] = status;
                }
                else if (employeOption == 3)
                { // Marks Project as complete
                    cout << "Your Projects are\n";
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

                    cout << "Select Project you mark as complete: ";

                    int select;
                    cin >> select;

                    statusA[select] = {"Complete"};

                    cout << "Project is Marked as complete\n";
                    cout << "Press any key to continue";
                    getch();
                }
                else if (employeOption == 4)
                { // Show deadlines
                    cout << "Deadlines of your projects are: \n";
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
                    cout << "press any key to continue!";
                    getch();
                }
                else if (employeOption == 5)
                { // Search by task
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
                else if (employeOption == 6)
                { // Number of tasks
                    int tasksNumber;
                    for(int i = 0; i<count; i++){
                        if(assignedTo[i] == employeeSelect){
                            tasksNumber++;
                        }
                    }
                    cout<<"The number of tasks assigned to you are: "<<tasksNumber<<endl;
                    cout<<"Press any key to continue!";
                    getch();
                    tasksNumber = 0;
                    
                }else if (employeOption == 7)
                {
                    break;
                }
            }
        }
        else if (userOption == 3)
        {
            // Program Ends
            cout << "Program Ended\n";
            cout << "Thanks for using this Program.\n";
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