

class luhn {

    /** Luhn Algorithm - Credit Card number validator algorithm. Also called as **mod 10** algorithm.
    Visit https://en.wikipedia.org/wiki/Luhn_algorithm for more details **/

    public static int addDigits(int number) {

        int sumOfDigits = 0;

        if (number < 9) {
            return number;
        }else{

            while(number >0) {
                sumOfDigits += number % 10;
                number = number / 10;
            }
        }
        return sumOfDigits;
    }

    public static String getCardType(String cardNumber) {

        String cardType = "Unknown Card";
            if(cardNumber.startsWith("3")) {
                cardType = "American Express";
            }else if (cardNumber.startsWith("4")) {
                cardType = "Visa";
            }else if (cardNumber.startsWith("5")) {
                cardType = "Master";
            }else if (cardNumber.startsWith("6")) {
                cardType = "Discover";
            }

        return cardType;
    }

    public static void main(String args[]) {

        String cardNumber = "6011181347332571";

        int digitSum = 0;
        int numberOfDigits = cardNumber.length();
        boolean isSecondNumber = false;

        for(int i = numberOfDigits - 1; i >=0; i--) {  // to take values from right most.

            int checkDigit = Character.getNumericValue(cardNumber.charAt(i)); // to get the integer value of digits

            if (isSecondNumber) { 
                digitSum += addDigits(checkDigit * 2); // Double the even number position digits and add the result digits to make it single digit. Finally add with digitSum.
            }else{
                digitSum += checkDigit; // Just add the value with digitSum.
            }
            isSecondNumber = !isSecondNumber;
        }


        //To check the card number is valid or not 

        if (digitSum % 10 == 0) {
            System.out.println("The Card number " + cardNumber + " is valid and it is a " + getCardType(cardNumber) + " Card.");
        }else{
            System.out.println("The Card number " + cardNumber + " is inValid.");
        }

    }

    
}
