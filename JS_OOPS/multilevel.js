class Person{
    constructor(name , age){
        this.name = name;
        this.age =age;
    }
};
class Student extends Person{
    constructor(name , age ,rollNum){
        super(name,age);
        this.rollNum= rollNum;
    }
};
class GradStudent extends Student{
    constructor(name , age , rollNum, specialization){
        super(name,age,rollNum);
        this.specialization= specialization;
    }

    display(){
        console.log(`Name : ${this.name}`);
        console.log(`Age :${this.age}`);
        console.log(`rollNum :${this.rollNum}`);
        console.log(`specialization :${this.specialization}`);
    }
};
let g1 = new GradStudent ("Mr.rohit",22,21,"Angular");
g1.display();