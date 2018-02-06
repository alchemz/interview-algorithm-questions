//difference c and java
/*
In Java, all classes inherit from the object class directly or indirectly.
Therefore, there is always a single inheritance tree of classes in Java.
In C++, there is forest of classes, when we create a class that doesn't inherit from anything,
we create a new tree in forest.
*/

//Test class automatically inherits from Object class.
class Test{

}
class Main{
	public static void main(String[] args){
		Test t = new Test();
		System.out.println("t is instanceof Object: " + (t instanceof Object))
	}
}

/*
* protect: means different in Java, it protects member of a class A are accessible to class B
*/
class A{
	protected int x =10, y=20;
}
class B{
	public static void main(string args[]){
		A a = new A();
		System.out.println(a.x + " " + a.y);
	}
}