#include<iostream>
using namespace std;

class AudioClip
{
private:
  int channels,resolutin,sampleRate,duration;

public:
  AudioClip()
  {channels=1;resolutin=8;sampleRate=2205;}

  void Setter_Channel(int c)
    {
      if(c==1 || c==2)
      channels=c;
    }

  void Setter_Resolution(int r)
    {
    if(r==8 ||r==16 || r==24)
    resolutin=r;
    }

  void Setter_SampleRatte(int sr)
    {
      if(sr==22050 || sr ==44100 || sr == 88200)
      sampleRate=sr;
    }

  int   getter_Channel()
  {
    return channels;
  }

  int   getter_Resolution()
  {
    return resolutin;
  }
  int   getter_SampleRatte()
  {
    return sampleRate;
  }


  bool StudioQuality()
  {
    if(channels==2 && resolutin==24 && sr==88200)
    return true;
    else
    return false;
  }

  int dataSize()
  {
    int byttes;
    byttes=duration*channels*(resolutin/8)*sampleRate;
  }

};


int main(int argc, char const *argv[]) {
  int s;
  AudioClip vol1(),vol2();
  cout<<"Enter"
  vol1.Setter_Channel()
  return 0;
}
