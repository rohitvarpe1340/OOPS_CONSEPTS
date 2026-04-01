class Person{
    constructor(name ,age){
        this.name= name;
        this.age = age;
    }
};
class Student  extends Person{
    constructor(name , age, rollNo){
        super(name,age);
        this.rollNo=rollNo;
    }
};
class Teacher extends Person{
    constructor(name, age,rollNo,subject){
        super(name,age);
        this.rollNo=rollNo;
        this.subject= subject;
    };
    display(){
        console.log(`name : ${this.name}`);
        console.log(`age : ${this.age}`);
        console.log(`subject : ${this.subject}`);
        console.log(`rollNo :${this.rollNo}`);
    }
};
let t1 =new Teacher("mr.rohit",22,12,"java");
t1.display();