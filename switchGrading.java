public class switchGrading {
    public static void main(String[] args) {
        char grade;
        grade = 'H';
        switch (grade) {
            case 'A':
                System.out.println("you did great!");
                break;
            case 'B':
                System.out.println("you did good");
                break;  
            case 'C':
                System.out.println("you did okay");
                break;
            case 'D':
                System.out.println("you could improve");
                break;
            case 'F':
                System.out.println("you failed");
                break;
            default:
                throw new AssertionError();
        }
    }
    
}
