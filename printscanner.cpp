
class device //printerscanner or later printerscannercopy 
{
public:
  device() {}
  virtual ~device() {};
  virtual deviceopr() = 0;
}

class print: public device
{
public:
   print();
   ~virtual print();
   deviceopr();
}

class scan :public device
{
public:
 scan();
 virtual ~scan();
 deviceopr();

}

int printmgr(print obj)
{
    obj.deviceopr();
}


int scanmgr(scan obj)
{
    obj.deviceopr();
}

class printmgr
{
public:
  printmgr()
  {
    device obj = new print;
    obj.deviceopr();
  }  
}

class scanmgr
{
private:

public:
   scanmgr()
   {
   device obj = new scan;
   obj.deviceopr();
   }
}
