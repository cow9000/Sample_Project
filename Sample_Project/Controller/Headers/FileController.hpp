//
//  FileController.hpp
//  Sample_Project
//
//  Created by Vawdrey, Derek on 2/6/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../../Data/CrimeData.hpp"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

class FileController{
public:
    static std::vector<CrimeData> readCrimeDataToVector(string filename);
};

#endif /* FileController_hpp */
