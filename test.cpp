#include<iostream>
using namespace std;

class audioClip{

public:

  audioClip()
  {
    channels = 1;
    resolution = 8;
    sample_rate = 22050;
  }

  void setchannels(double c)
  {
    //while(c!=1 || 2)
    {
      if(c==1 || c==2)
        channels = c;
      else
        std::cout << "Invalid value " << '\n';
    }

  }

  void setresolution(double r)
  {
    if(r==8 || r==16 || r==24)
      resolution = r;
    else
      std::cout << "Invalid value " << '\n';
  }

  void setsample_rate(double s)
  {
    if(s==22050 || 44100 || 88200)
      sample_rate = s;
    else
      std::cout << "Invalid Value " << '\n';
  }

  double getchannels()
  {
    return channels;
  }

  double getresolution()
  {
    return resolution;
  }

  double getsample_rate()
  {
    return sample_rate;
  }

  bool StudioQuality()
  {
    if(channels==2 && resolution==24 && sample_rate==88200)
      return true;
    else
      return false;
  }

  double dataSize(int d)
  {
    double bytes = (d * channels * (resolution/8) * sample_rate);
  }

private:
  double channels , resolution , sample_rate;
};

int main() {
  audioClip obj;


  obj.getchannels();
  obj.getresolution();
  obj.getsample_rate();

  if(obj.StudioQuality()==true)
    std::cout << "quality is good " << '\n';
  else
    std::cout << "quality is bad " << '\n';

  int duration;
  std::cout << "number of bytes are : " << obj.dataSize(duration) <<'\n';


  // double c , r , s;
  // std::cout << "enter no of channels : "; std::cin >> c;
  // obj.setchannels(c);
  //
  // std::cout << "enter resolution : "; std::cin >> r;
  // obj.setresolution(r);
  //
  // std::cout << "enter sample rates : "; std::cin >> s;
  // obj.setsample_rate(s);




  return 0;
}
