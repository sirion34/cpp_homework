/*
 * Interface.h
 *
 *  Created on: 16 окт. 2018 г.
 *      Author: Gleb
 */

#ifndef INTERFACE_H_
#define INTERFACE_H_

#include <iostream>

void Interface()
{
        DataBase database;
        std::cout<<"Good morning dear user."
        		"\n To add a patient to the list, enter (1)."
        		"\n To display a list of patient data, enter (2)."
        		"\n To save changes, enter (3)."
        		"\n To delete the patient by ID, enter (4)."
        		"\n To delete ALL patients, enter (5)."
        		"\n To exit the program, enter (0)"  << std::endl;
        int q = -1;
        while (q != 0)
        {
            std :: cin >> q;
            if (q == 0)
            {
            	database.remove_all_patiens();
            	std::cout << "Closing the program."
            			" Glad to see you again." << std::endl;
            } else if (q == 1)
            {
            	database.append_patient();

            } else if (q == 2)
            {
                database.get_info_all();

            } else if (q == 3)
            {
            	database.save_changes();
            } else if (q == 4)
            {
            	database.remove_some_patient();
            } else if (q == 5)
            {
            	std::cout << "You really want delete all data base? yes/no:" << std::endl;
            	std::string answ;
            	std::cin >> answ;
            	if (answ == "yes")
            	{
            		database.remove_all_patiens();
            	}
            }else
            {
            	std::cout << "Sorry, this method does"
            			" not exist, try again." << std::endl;
            }

        }
}


#endif /* INTERFACE_H_ */
