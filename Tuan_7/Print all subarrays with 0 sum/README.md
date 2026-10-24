# Print all subarrays with 0 sum

## Mô tả bài toán
- Đầu vào: Một mảng số nguyên gồm $n$ phần tử.
- Đầu ra: Mảng con có tổng các phần tử của nó bằng $0$. 
    - Nếu có:in ra màn hình các mảng con đó.
    - Nếu không: thông báo không tìm thấy.   
- Lưu ý: Các phần tử trong mảng con phải đứng liền kề nhau (chiếm các vị trí liên tiếp trong mảng gốc).

## Mô tả giải thuật
- Khởi tạo biến count = 0 để đếm số lượng mảng con thỏa mãn điều kiện.
- Dùng vòng lặp ngoài (biến i từ 0 đến n - 1) để chọn điểm bắt đầu của mảng con.
- Tại mỗi vị trí i, khởi tạo biến $tong$ có giá trị bằng 0.
- Dùng vòng lặp trong (biến j từ i đến n - 1) cộng dồn giá trị phần tử hiện tại vào tổng: $tong += a[j]$
- Kiểm tra điều kiện tong == 0:
    - Nếu đúng: gọi hàm in ra các phần tử từ vị trí i đến j (chính là mảng con cần tìm), đồng thời tăng count lên 1.
- Sau khi chạy xong toàn bộ các vòng lặp, kiểm tra nếu count == 0 thì in ra màn hình $subarray not found$

**Độ phức tạp thuật toán $O(n^2)$**

## Test case
### Case 1:
#### Input:
```
nhap so phan tu cua mang: 10
nhap tung phan tu cho mang: 3 4 -7 3 1 3 1 -4 -2 -2
```
#### Output:
```
3 4 -7 
3 4 -7 3 1 3 1 -4 -2 -2 
4 -7 3 
-7 3 1 3 
3 1 3 1 -4 -2 -2 
3 1 -4 
```
### Case 2:
#### Input:
```
nhap so phan tu cua mang: 10
nhap tung phan tu cho mang: 0 4 -7 3 1 3 0 -4 -2 -2 
```
#### Output:
```
0 
0 4 -7 3 
0 4 -7 3 1 3 0 -4 
4 -7 3 
4 -7 3 1 3 0 -4 
-7 3 1 3 
-7 3 1 3 0 
1 3 0 -4 
0 
```
### Case 3:
#### Input:
```
nhap so phan tu cua mang: 10
nhap tung phan tu cho mang: 3 4 7 3 1 3 1 4 2 2 
```
#### Output:
```
subarray not found
```
