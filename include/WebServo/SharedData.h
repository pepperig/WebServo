/*
 * Copyright (C) 2017 IIT-ADVR
 * Author:  Giuseppe Rigano
 * email:   giuseppe.rigano@iit.it
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>
*/

#ifndef __SHARED_DATA_WEBSERVER_H__
#define __SHARED_DATA_WEBSERVER_H__

#include <CircularBuffer.h>
#include <mutex>
#include <memory>
#include <atomic>
#include <map>
#include <vector>
#include <iostream>


class SharedData {
   
  public:
  
    SharedData();
     
    
    void increaseNumClient();
    
    void decreaseNumClient();
    
    std::atomic<int>& getNumClient();
    
    std::shared_ptr<Buffer<std::vector<double>>> external_command;
    
    
  private:
       
   
    std::atomic<int> num_client;  
};


#endif //__SHARED_DATA_WEBSERVER_H__