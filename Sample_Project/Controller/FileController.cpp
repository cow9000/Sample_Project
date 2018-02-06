//
//  FileController.cpp
//  Sample_Project
//
//  Created by Vawdrey, Derek on 2/6/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include "Headers/FileController.hpp"

std::vector<CrimeData> FileController::readCrimeDataToVector(std::string filename){
    
    std::vector<CrimeData> crimeVector;
    std::string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    if(dataFile.is_open()){
        while(!dataFile.eof()){
            getline(dataFile, currentCSVLine, '\n');
            
            if(rowCount != 0){
                if(currentCSVLine.length() != 0 ){
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            
            }
            rowCount++;
            
            
        }
        
        dataFile.close();
    }
    else{
        std::cout << "NO FILE" << std::endl;
    }
    
    return crimeVector;
    
    
}
