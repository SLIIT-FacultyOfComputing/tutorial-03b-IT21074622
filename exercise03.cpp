#include <iostream>

using namespace std;

int volume(int height, int width, int length);

struct Box{

int height;
int width;
int length;

};

int main() {

  Box box1, box2;
  int box1Height, box1Width, box1Length;
  int box2Height, box2Width, box2Length;
  
  int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> box1Height;
    cout << "Enter Box 1 Width : ";
    cin >> box1Width;
    cout << "Enter Box 1 Length : ";
    cin >> box1Length;
    
    cout << "Enter Box 2 Height : ";
    cin >> box2Height;
    cout << "Enter Box 2 Width : ";
    cin >> box2Width;
    cout << "Enter Box 2 Length : ";
    cin >> box2Length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(box1.height, box1.width,                          box1.length)
                + volume(box2.height, box2.width,                          box2.length);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

int Volume(int height, int width, int length )
{
  int vol;

  vol = height * width * length;

  return vol;
  
  //return height * width * length;
  
}
// Implement the functions here
