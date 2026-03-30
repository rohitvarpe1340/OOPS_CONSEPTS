class Collage{
    constructor(department , headOfDepartment ){
        this.department = department;
        this.headOfDepartment= headOfDepartment;
    }
};
class Teacher extends Collage{
    constructor(department,headOfDepartment,subject,staffQuantity){
       super(department,headOfDepartment);
        this.subject= subject;
        this.staffQuantity = staffQuantity;
    }

    display(){
        console.log(`Department :${this.department}`);
        console.log(`Head Of Department :${this.headOfDepartment}`);
        console.log(`Subject :${this.subject}`);
        console.log(`StaffQuantity :${this.staffQuantity}`);
    }
};
let t1 = new Teacher("computer science","Mr.Rohit","javascript",10);
t1.display();
