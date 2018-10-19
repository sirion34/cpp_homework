/*
 * DataBase.h
 *
 *  Created on: 16 окт. 2018 г.
 *      Author: Gleb
 */
#ifndef DATABASE_H_
#define DATABASE_H_

void split(const std::string &s, char delim, std::vector<std::string> &elems)
{
    std::stringstream ss(s);
    std::string item;
    while (getline(ss, item, delim)) {
        elems.push_back(item);
    }
}


std::vector<std::string> split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, elems);
    return elems;
}

struct Patient
{
    std::string name = " ";
    std::string surname = " ";
    bool sex = true;
    int age = 0;
    std::string city = " ";
    int visitAmount = 0;
};

class DataBase
{
private:
    std::vector<Patient> patients;
    int length = 0;
    void refresh_length()
    {
    	length = patients.size();
    }
    void append_local_patient(const Patient& local_patient)
    {
    	patients.push_back(local_patient);
    };
public:
    /*This is a constructor.
     *We call it to read the file, our initial database.
     *We This file we change if we want.*/
    DataBase()
	{
    	std::ifstream file;
    	file.open("C:\\Users\\Gleb\\eclipse-workspace\\the_hatters\\src\\patientos.txt");
    	while(file)
        {
    		/*In this place, we begin the line-by-line reading.
    		 *The operator if is extremely necessary, as I understand it,
    		 *The because getline can take an empty line,
    		 *The and then everything will be extremely sad.*/
            std::string str;
            std::getline(file, str);
            if (str != "")
            {
            	/*Use our split function,
            	 *translate the string into a bool and int*/

                std::vector<std::string> patient_data_local;
                Patient patient_local;
                split(str, ' ', patient_data_local);


                bool local_sex;
                if (patient_data_local[2]=="man" || 1)
                {
                	local_sex = true;
                }else
                {
                	local_sex = false;
                }

                int local_age = atoi(patient_data_local[3].c_str());
                int local_visitAmount = atoi(patient_data_local[5].c_str());

                patient_local.name = patient_data_local[0];
                patient_local.surname = patient_data_local[1];
                patient_local.sex = local_sex;
                patient_local.age = local_age;
                patient_local.city = patient_data_local[4];
                patient_local.visitAmount = local_visitAmount;

                append_local_patient(patient_local);
            }

        }
    	refresh_length();
	}
    void append_patient()
    {
        Patient local_patient;
    	std::cout << "Please, enter name, surname, sex, age, city,"
    			" visirAmount." << std::endl;
    	std::string local_name;
    	std::cin >> local_name;
    	local_patient.name = local_name;

    	std::string local_surname;
    	std::cin >> local_surname;
    	local_patient.surname = local_surname;

    	std::string local_sex;
    	std::cin >> local_sex;

    	/*You can implement in different ways, I decided so*/
    	if (local_sex == "man" || 1)
    	{
    		local_patient.sex = true;
    	}else
    	{
    		local_patient.sex = false;
    	}
    	int local_age;
    	std::cin >> local_age;
    	local_patient.age = local_age;

    	std::string local_city;
    	std::cin >> local_city;
    	local_patient.city = local_city;

    	int local_visitAmount;
    	std::cin >> local_visitAmount;
    	local_patient.visitAmount = local_visitAmount;

    	this->append_local_patient(local_patient);
    	this->refresh_length();
    }

    void get_info_all()
    {
    	std::cout << "All patient:" << std::endl;

    	for (int ID = 0; ID < this->length; ++ID)
    	{
    		std::cout << "Patient ID: " << ID << std::endl;
    		std::cout << this->patients[ID].name << std::endl;
    		std::cout << this->patients[ID].surname << std::endl;
    		std::cout << this->patients[ID].sex << std::endl;
    		std::cout << this->patients[ID].age << std::endl;
    		std::cout << this->patients[ID].city << std::endl;
    		std::cout << this->patients[ID].visitAmount << std::endl;

    	}
    }

    void get_info_by_ID(const DataBase& database)
        {
    	//didn't work
        	std :: cout << "d" << std :: endl;
        }

    void save_changes()
    {
    	std::ofstream file;
    	file.open("C:\\Users\\Gleb\\eclipse-workspace\\the_hatters\\src\\patientos.txt");
    	for(int i = 0; i < this->length; ++i)
    	{
    		file << this->patients[i].name << ' ' << this->patients[i].surname << ' '
    			 <<	this->patients[i].sex << ' ' << this->patients[i].age << ' '
				 << this->patients[i].city << ' ' << this->patients[i].visitAmount <<"\n";


    	}
    	std :: cout << "Changes saved." << std :: endl;
    }
};



#endif /* DATABASE_H_ */
