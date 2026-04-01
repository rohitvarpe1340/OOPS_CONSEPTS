class Student {
    constructor(name , rollno){
        this.name= name;
        this.rollno= rollno;
    }
};
const Teacher = (Base)=> class extends Base{
    constructor(name , rollno,subject , salary){
        super(name , rollno);
        this.subject= subject;
        this.salary= salary;
    }
};
class TeacherAssistant extends Teacher(Student){
   constructor(name , rollno,subject,salary){
    super(name,rollno,subject,salary);
   }

   display(){
    console.log(`Name: ${this.name}`);
    console.log(`Roll No:${this.rollno}`);
    console.log(`subject:${this.subject}`);
    console.log(`salary :${this.salary}`);
   }
};
let t1 = new TeacherAssistant("Mr.rohit",12,"java",50000);
t1.display();