/* 
    base class: f1, f2, f3
    derived class: f4, f5

    base* p;
    p = new derived(); // object of derived points to base class
    
    p->f1;
    p->f2;
    p->f3;

    p->f4; //cannot call
    p->f5; //cannot call
*/