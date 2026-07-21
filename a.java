import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String a=sc.nextLine();
        int left=0;
        int right=a.length()-1;
        while(right>left){
            while(right>left && !Character.isLetterOrDigit(a.charAt(left))){
                left++;
                
            }
            while(right>left && !Character.isLetterOrDigit(a.charAt(right))){
                right--;

        }
        char l=Character.toLowerCase(a.charAt(left));
        char r=Character.toLowerCase(a.charAt(right));
        if(l!=r){
            System.out.println(false
                
            );
            return;
        }
        left++;
        right--;

    }System.out.println(true);

}
