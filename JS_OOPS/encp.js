class Teacher{
  #salary;

  constructor(name ,salary){
    this.name =name;
    this.#salary=salary;
  }

  display(){
    console.log(`Staff Name:${this.name}`);
    console.log(`salary : ${this.#salary}`);
  }
}

const  t1 = new  Teacher ("rohit",30000);
t1.display();
