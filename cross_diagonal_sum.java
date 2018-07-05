import java.util.*; 
public class CrossDiagonalSum
{
	public static void main(String[] args) {
	    Scanner s = new Scanner(System.in);
	    int row_size = s.nextInt();
	    int col_size = s.nextInt();
		int[][] matrix = new int[row_size][col_size];
		int[] cross_sum = new int[col_size+2];
		for(int i=0;i<row_size;i++)
		{
		    for(int j=0;j<col_size;j++)
		    {
		       matrix[i][j]=s.nextInt();
		    }
		}
		for(int i=0;i<row_size;i++)
		{
		    for(int j=0;j<col_size;j++)
		    {
		        cross_sum[i+j]+=matrix[i][j];
		    }
		}
		for(int i=0;i<col_size+2;i++)
		{
		    System.out.print(cross_sum[i]+"\t");
		}
	}
}
