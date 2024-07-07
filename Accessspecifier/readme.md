* Here I am creating two instances of a single class house for memory structure and three 
 * 3 classes 
 house(parent class)
 kamare(inherited class)
 makaan(other class)

* If I create two instance of house class h1, h2 the member variables which are storing their data willl get
  separate or refreshed memory space each time we create new object
* But in case of member functions they would be shared by all the object



()for learning the working of access specifier as the name suggest of the cpp file
-------------------------------------------------------------------------------------------------------------

* By default all the member var/fun are assigned private access specifier.

class                       access specifiers
house(parent class)         private : int x;               protected : int y;                public : int z;
kamare(inherited class)     private : can't be accessed   protected : y=10;                 public : z=100;
makaan(other class)         private : can't be accessed   protected : can't be accessed     public : z=50;

* Here we can see the inherited class can easily access the protectd and public member variables, but the protected memeber variables/orfunctions cannot be access by any other class except the parent class itself.
