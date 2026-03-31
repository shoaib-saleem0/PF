#include <iostream>
#include <conio.h>
using namespace std;
main()
{

    int TOTAL_STUDENTS = 100;
    int index = 6;

    // data structures
    string nameArray[TOTAL_STUDENTS] = {"ali", "shoaib", "ahmad", "usman", "hamza", "bilal"};
    int ageArray[TOTAL_STUDENTS] = {20, 18, 19, 21, 20, 22};
    float matricArray[TOTAL_STUDENTS] = {800, 1200, 950, 870, 920, 880};
    float interArray[TOTAL_STUDENTS] = {750, 1200, 880, 900, 860, 910};
    float ecatArray[TOTAL_STUDENTS] = {250, 400, 320, 300, 280, 350};
    string pref1Array[TOTAL_STUDENTS] = {"EE", "CS", "SE", "SE", "CS", "EE"};
    string pref2Array[TOTAL_STUDENTS] = {"CS", "SE", "EE", "SE", "SE", "CS"};
    string pref3Array[TOTAL_STUDENTS] = {"SE", "EE", "CS", "EE", "SE", "SE"};
    float aggriArray[TOTAL_STUDENTS];
    string CS[2];
    string CE[2];
    string EE[2];

    while (true)
    {
        // main header of ums
        system("cls");
        cout << "--------------------------------------------------\n";
        cout << "------University Admission Management System------\n";
        cout << "--------------------------------------------------\n";

        cout << "User Menu\n";
        cout << "1. Admin\n";
        cout << "2. Student\n";
        cout << "3. Exit\n";
        cout << "Choose Option : ";

        string userOption;
        cin >> userOption;

        cout << "You Choose " << userOption << endl;
        if (userOption == "1")
        {
            // write here the admin code
            int countAttempt = 0;
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "Admin Menu : Login Attempt " << i + 1 << endl;
                cout << "Enter Username: ";
                string username;
                cin >> username;
                cout << "Enter Password: ";
                int password;
                cin >> password;
                if (username == "admin" && password == 123)
                {
                    cout << "Successful Login!";
                    while (true)
                    {
                        system("cls");
                        cout << "1. Show all students \n";
                        cout << "2. Search student \n";
                        cout << "3. Update student record \n";
                        cout << "4. Generate Merit List \n";
                        cout << "5. Delete record by name\n";
                        cout << "6. Logout\n";
                        cout << "Choose the option: ";

                        string adminOption;
                        cin >> adminOption;
                        if (adminOption == "1")
                        {
                            // show students record
                            cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                            for (int i = 0; i < index; i++)
                            {if(nameArray[i] != " "){
                                cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                     << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << "\t" << endl;
                            }
                            }
                        }

                        else if (adminOption == "2")
                        {
                            // search student by name
                            cout << "Enter the student name you want to search: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                         << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << "\t" << endl;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found against name " << name << endl;
                            }
                        }
                        else if (adminOption == "3")
                        {
                            // Update student record

                            cout << "Enter the name you want to update record of: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = 0;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "-----OLD RECORD----\n";
                                cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                     << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << "\t" << endl;

                                cout << "Enter new record for update: \n";

                                cout << "Enter your name: ";
                                string name;
                                cin >> name;
                                cout << "Enter your age: ";
                                int age;
                                cin >> age;
                                cout << "Enter Matric Marks: ";
                                float matric;
                                cin >> matric;
                                cout << "Enter FSC Marks: ";
                                float FSC;
                                cin >> FSC;
                                cout << "Enter your ECAT marks: ";
                                float ecat;
                                cin >> ecat;
                                cout << "Enter CS,CE,EE as your preferences\n";
                                string pref1;
                                string pref2;
                                string pref3;
                                while (true)
                                {
                                    cout << "Enter your 1st pref: ";

                                    cin >> pref1;
                                    cout << "Enter your 2nd pref: ";
                                    cin >> pref2;
                                    cout << "Enter your 3rd pref: ";
                                    cin >> pref3;
                                    if (pref1 == "CE" || pref1 == "SE" || pref1 == "EE" || pref2 == "CE" || pref2 == "SE" || pref2 == "EE" ||
                                        pref3 == "CE" || pref3 == "SE" || pref3 == "EE")
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout << "Wrong input please enter CS, CE or EE\n";
                                    }
                                }
                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                matricArray[foundindex] = matric;
                                interArray[foundindex] = FSC;
                                ecatArray[foundindex] = ecat;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;

                                cout << "Your data has been saved.\n";
                            }
                        }
                        else if (adminOption == "4")
                        {
                            // generate merit list

                            for (int i = 0; i < index; i++)
                            {
                                float aggri = matricArray[i] / 1200.0 * 10 + interArray[i] / 1200 * 40 + ecatArray[i] / 400 * 50;
                                aggriArray[i] = aggri;
                            }
                            // sorting data on the basis of aggregate
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i; j < index; j++)
                                {
                                    if (aggriArray[i] < aggriArray[j])
                                    {
                                        // swapping of name
                                        string tempName = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = tempName;

                                        // swapping of age
                                        int tempAge = ageArray[i];
                                        ageArray[i] = ageArray[j];
                                        ageArray[j] = tempAge;

                                        // swapping of matric
                                        float tempMatric = matricArray[i];
                                        matricArray[i] = matricArray[j];
                                        matricArray[j] = tempMatric;

                                        // swapping of inter
                                        float tempInter = interArray[i];
                                        interArray[i] = interArray[j];
                                        interArray[j] = tempInter;

                                        // swapping of ecat
                                        float tempEcat = ecatArray[i];
                                        ecatArray[i] = ecatArray[j];
                                        ecatArray[j] = tempEcat;

                                        // swapping of pref1
                                        string tempPref1 = pref1Array[i];
                                        pref1Array[i] = pref1Array[j];
                                        pref1Array[j] = tempPref1;

                                        // swapping of pref2
                                        string tempPref2 = pref2Array[i];
                                        pref2Array[i] = pref2Array[j];
                                        pref2Array[j] = tempPref2;

                                        // swapping of pref3
                                        string tempPref3 = pref3Array[i];
                                        pref3Array[i] = pref3Array[j];
                                        pref3Array[j] = tempPref3;

                                        // swapping of aggregate
                                        float tempAgg = aggriArray[i];
                                        aggriArray[i] = aggriArray[j];
                                        aggriArray[j] = tempAgg;
                                    }
                                }
                            }

                            // code to display all data with aggregate
                            cout << "Name\tAge\tAggregate" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggriArray[i] << endl;
                            }
                            // admit students into disciplines
                            bool admitted[100] = {false};
                            int seCount = 0;
                            int csCount = 0;
                            int eeCount = 0;

                            string CS[2];
                            string SE[2];
                            string EE[2];

                            for (int i = 0; i < index; i++)
                            {
                                if ((pref1Array[i] == "CS" || pref2Array[i] == "CS" || pref3Array[i] == "CS") && !admitted[i] && aggriArray[i] > 90.0 && csCount < 2)
                                {
                                    CS[csCount] = nameArray[i];
                                    csCount++;
                                    admitted[i] = true;
                                }
                            }
                            for (int i = 0; i < index; i++)
                            {
                                if ((pref1Array[i] == "SE" || pref2Array[i] == "SE" || pref3Array[i] == "SE") && !admitted[i] && aggriArray[i] > 80.0 && seCount < 2)
                                {
                                    SE[seCount] = nameArray[i];
                                    seCount++;
                                    admitted[i] = true;
                                }
                            }
                            for (int i = 0; i < index; i++)
                            {
                                if ((pref1Array[i] == "EE" || pref2Array[i] == "EE" || pref3Array[i] == "EE") && !admitted[i] && aggriArray[i] > 70.0 && eeCount < 2)
                                {
                                    EE[eeCount] = nameArray[i];
                                    eeCount++;
                                    admitted[i] = true;
                                }
                            }
                            cout << endl;
                            cout << "Students admitted to CS are: \n";
                            for (int i = 0; i < csCount; i++)
                            {
                                cout << CS[i] << endl;
                            }
                            cout << endl;
                            cout << "Students admitted to SE are: \n";
                            for (int i = 0; i < seCount; i++)
                            {
                                cout << SE[i] << endl;
                            }
                            cout << endl;
                            cout << "Students admitted to EE are: \n";
                            for (int i = 0; i < eeCount; i++)
                            {
                                cout << EE[i] << endl;
                            }
                        }
                        else if (adminOption == "5")
                        {
                            cout << "Enter the student name you want to delete: ";
                            string name;
                            cin >> name;
                        
                            int foundindex;
                            bool found = false;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                         << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << "\t" << endl;
                                    foundindex = i;
                                    found = true;
                                }
                                if (found == true)
                                {
                                    nameArray[foundindex] = " ";
                                    ageArray[foundindex] = 0;
                                    matricArray[foundindex] = 0;
                                    interArray[foundindex] = 0;
                                    ecatArray[foundindex] = 0;
                                    pref1Array[foundindex] = " ";
                                    pref2Array[foundindex] = " ";
                                    pref3Array[foundindex] = " ";
                                    
                                }
                            }
                            cout << "Record of " << name << " Deleted\n";
                        }

                        else if (adminOption == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << "Wrong Option Selected\n";
                        }
                        cout << "Press any key to continue..";
                        getch();
                    }
                    cout << " Press any key to continue..";
                    getch();
                    break;
                }
                else
                {
                    cout << "Username or password is invalid!\n";
                }

                cout << "Press any key to Continue..\n";
                getch();
            }
        }
        else if (userOption == "2")
        {
            system("cls");
            // write here the student code
            cout << "Welcome To UMS Student Menu\n";
            cout << "Enter your name: ";
            string name;
            cin.ignore();
            getline(cin, name);
            cout << "Enter your age: ";
            int age;
            cin >> age;
            cout << "Enter Matric Marks: ";
            float matric;
            cin >> matric;
            cout << "Enter FSC Marks: ";
            float FSC;
            cin >> FSC;
            cout << "Enter your ECAT marks: ";
            float ecat;
            cin >> ecat;
            cout << "Enter CS,CE,EE as your preferences\n";
            string pref1;
            string pref2;
            string pref3;
            while (true)
            {
                cout << "Enter your 1st pref: ";

                cin >> pref1;
                cout << "Enter your 2nd pref: ";
                cin >> pref2;
                cout << "Enter your 3rd pref: ";
                cin >> pref3;
                if ((pref1 == "CS" || pref1 == "SE" || pref1 == "EE") && (pref2 == "CS" || pref2 == "SE" || pref2 == "EE") &&
                    (pref3 == "CS" || pref3 == "SE" || pref3 == "EE"))
                {
                    break;
                }
                else
                {
                    cout << "Wrong input please enter CS, SE or EE\n";
                }
            }
            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = FSC;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index = index + 1;
            cout << "Your data has been saved.\n";
            cout << "Press any key to continue..\n";
            getch();
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "You entered wrong option\n";
        }
    }

    cout << "Thanks for using this software :)\n";
}