class Student{
    constructor(name , age , education){
        this.name =name;
        this.age =age ;
        this.education = education;

    }
    display(){
        console.log(`student name :${this.name}`);
        console.log(`student age : ${this.age}`);
        console.log(`student education : ${this.education}`);
    }
}
let  s1 = new  Student ("rohit",22,"MCA");
s1.display();
