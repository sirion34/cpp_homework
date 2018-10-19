/*
 * Patient.h
 *
 *  Created on: 15 окт. 2018 г.
 *      Author: Gleb
 */

#ifndef PATIENT_H_
#define PATIENT_H_

struct Patient
{
    std::string name = " ";
    std::string surname = " ";
    bool sex = true;
    int age = 0;
    std::string city = " ";
    int visitAmount = 0;
};



#endif /* PATIENT_H_ */
