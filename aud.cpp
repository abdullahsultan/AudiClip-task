#include<iostream>
using namespace std;

class AudioClip
{
private:
  int channels,resolutin,sampleRate;

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
    if(channels==2 && resolutin==24 && sampleRate==88200)
    return true;
    else
    return false;
  }

  int dataSize(int duration)
  {
    int byttes;
  return  byttes=duration*channels*(resolutin/8)*sampleRate;
  }

};


int main(int argc, char const *argv[]) {
 AudioClip volumes[5];int val;
for(int x=0;x<5;x++) {
cout<<"\n Vol no ="<<x<<endl;
cout<<"Enter channel \n";
cin>>val;
 volumes[x].Setter_Channel(val);

cout<<"Enter Resolutin \n";
cin>>val;
 volumes[x].Setter_Resolution(val);

cout<<"Enter Sample Rate \n";
cin>>val;
 volumes[x].Setter_SampleRatte(val);

cout<<"\n Channel = "<<volumes[x].getter_Channel()<<endl;
cout<<"\n Resolution = "<<volumes[x].getter_Resolution()<<endl;
cout<<"\n Sample Rate = "<<volumes[x].getter_SampleRatte()<<endl;

if(volumes[x].StudioQuality()==true)
cout<<"Best Quality \n";
else
cout<<"Not Best \n";

cout<<"Enter Duration \n";
cin>>val;
cout<<volumes[x].dataSize(val)<<" bytes \n";

}
  return 0;
}
