#include <bits/stdc++.h>
#include <string>

using namespace std;

vector<string> preProcess(long long int n) 
{ 
    vector<string> preProcessedCubes; 
    for (int i = 1; i * i * i <= n; i++) { 
        long long int iThCube = i * i * i; 
  
        // convert the cube to string and push into 
        // preProcessedCubes vector 
        string cubeString = to_string(iThCube); 
        preProcessedCubes.push_back(cubeString); 
    } 
    return preProcessedCubes; 
} 
  
/* Utility function for findLargestCube().  
   Returns the Largest cube number that can be formed */
string findLargestCubeUtil(string num,  
                    vector<string> preProcessedCubes) 
{ 
    // reverse the preProcessed cubes so that we  
    // have the largest cube in the beginning 
    // of the vector 
    reverse(preProcessedCubes.begin(), preProcessedCubes.end()); 
  
    int totalCubes = preProcessedCubes.size(); 
  
    // iterate over all cubes 
    for (int i = 0; i < totalCubes; i++) { 
        string currCube = preProcessedCubes[i]; 
  
        int digitsInCube = currCube.length(); 
        int index = 0; 
        int digitsInNumber = num.length(); 
        for (int j = 0; j < digitsInNumber; j++) { 
  
            // check if the current digit of the cube 
            // matches with that of the number num 
            if (num[j] == currCube[index])  
                index++; 
              
            if (digitsInCube == index)                  
                return currCube;             
        } 
    } 
  
    // if control reaches here, the its  
    // not possible  to form a perfect cube 
    return "Not Possible"; 
} 
  
// wrapper for findLargestCubeUtil() 
void findLargestCube(long long int n) 
{ 
    // pre process perfect cubes 
    vector<string> preProcessedCubes = preProcess(n); 
  
    // convert number n to string 
    string num = to_string(n); 
  
    string ans = findLargestCubeUtil(num, preProcessedCubes); 
  
    cout << "Largest Cube that can be formed from "
         << n << " is " << ans << endl; 
} 
  
// Driver Code 
int main() 
{ 
    long long int n; 
    n = 4125; 
    findLargestCube(n); 
  
    n = 876; 
    findLargestCube(n); 
  
    return 0; 
} 
