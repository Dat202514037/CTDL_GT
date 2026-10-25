# Find the largest subarray having an equal number of 0’s and 1’s

## Mô tả bài toán
- Đầu vào: Một mảng số nguyên gồm $n$ phần tử, mỗi phần tử chỉ nhận giá trị 0 hoặc 1
- Đầu ra: Mảng con dài nhất có số lượng phần tử 0 bằng số lượng phần tử 1.
    - Lưu ý: Các phần tử trong mảng con phải đứng liền kề nhau (chiếm các vị trí liên tiếp trong mảng gốc).

## Mô tả giải thuật
- Khởi tạo biến len = 0 để lưu độ dài lớn nhất của mảng con tìm được và biến start = 0 để lưu vị trí bắt đầu của mảng con dài nhất.
- Sử dụng vòng lặp ngoài với biến i chạy từ 0 đến n-1 để chọn vị trí bắt đầu của mảng con.
- Với mỗi vị trí i, khởi tạo biến $tong = 0$ và sử dụng vòng lặp trong với biến j chạy từ i đến n-1:
    - Nếu a[j] == 0 thì giảm tong đi 1; nếu a[j] == 1 thì tăng tong thêm 1.
    - Nếu tong == 0, tính độ dài mảng con và cập nhật biến $len$, $start$ nếu độ dài này lớn hơn độ dài lớn nhất đã tìm được trước đó.
- Sau khi chạy hết hai vòng lặp, in ra mảng con lớn nhất.

**Độ phức tạp thuật toán $O(n^2)$**

## Test case
### Case 1:
#### Input:
```
{ 0, 0, 1, 0, 1, 0, 0 }
```
#### Output:
```
0 1 0 1
```
---
### Case 2:
#### Input:
```
{1, 1, 0, 0, 1, 1 }
```
#### Output:
```
1 1 0 0 
```

