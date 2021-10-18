public class Solution { 
    public static void findLargest(int mat[][]){
        boolean isRow = true;
        int largestSum = Integer.MIN_VALUE;
        int num = 0; int nRows = mat.length; 
        if (nRows == 0) { 
            System.out.println("row " + num + " " + largestSum);
            return; 
        } 
        int mCols = mat[0].length; 
        for(int i = 0; i < nRows;i++){ 
            int rowSum = 0;
            for(int j = 0; j < mCols; j++){
                rowSum += mat[i][j];
            }
            if(rowSum > largestSum){
                largestSum = rowSum; num = i; 
            } 
        } 
        for(int j = 0; j < mCols; j++){
            int colSum = 0;
            for(int i = 0; i < nRows; i++){
                colSum += mat[i][j];
            } 
            if(colSum > largestSum){
                largestSum = colSum; num = j; isRow = false; 
            } 
        } 
        if(isRow){
            System.out.println("row " + num + " " + largestSum);
        }
        else{ 
            System.out.println("column " + num + " " + largestSum);
        } 
    }
}
