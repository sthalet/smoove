public class switchGrading {
    public static void main(String[] args) {
        char grade;
        grade = 'A';
        switch (grade) {
            case 'A' -> System.out.println("you did great!");
            case 'B' -> System.out.println("you did good");
            case 'C' -> System.out.println("you did okay");
            case 'D' -> System.out.println("you could improve");
            case 'F' -> System.out.println("you failed");
            default -> throw new AssertionError();
        }
    }
    
}
