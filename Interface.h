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
        		"\n To exit the program, enter (0)"  << std::endl;
        int q = -1;
        while (q != 0)
        {
            std :: cin >> q;
            if (q == 0)
            {
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
            } else
            {
            	std::cout << "Sorry, this method does"
            			" not exist, try again." << std::endl;
            }

        }
}


#endif /* INTERFACE_H_ */
