# Find a pair with the given sum in an array

## Mô tả bài toán
- Nhập vào một mảng và một số bất kì
- Tìm kiếm trong mảng hai phần tử có tổng bằng số đó và in cặp số ra màn hình
- Nếu không tìm được in ra "Pair not found"

## Mô tả giải thuật
- Khai báo một biến đếm count = 0 nhằm mục đích đếm số lượng cặp số thỏa mãn đã tìm được.
- Khởi tạo vòng lặp ngoài với biến đếm i chạy từ 0 đến n - 1.
- Khởi tạo vòng lặp trong với biến đếm j chạy từ i + 1 đến n - 1 (Bắt đầu từ i + 1 giúp tránh việc so sánh một phần tử với chính nó và loại bỏ các cặp bị trùng lặp ngược chiều).
- In ra màn hình các cặp số đã tìm được, cập nhật biến đếm count.
- Nếu hết hai vòng lặp mà count vẫn bằng 0 thì in ra "Pair not found"
<br>

> **Độ phức tạp thuật toán:** $O(n^2)$

## Test case
### Case 1:
#### Input:
```
nhap so phan tu cua mang: 7
nhap tung phan tu cho mang: 8 3 6 2 5 2 4
tong = 9
```
#### Output:
```
Pair found (3, 6)
Pair found (5, 4)
```
---
### Case 2:
#### Input:
```
nhap so phan tu cua mang: 7
nhap tung phan tu cho mang: 8 3 6 2 5 2 4
tong = 6
```
#### Output:
```
Pair found (2, 4)
Pair found (2, 4)
```
---
### Case 3:
#### Input:
```
nhap so phan tu cua mang: 7
nhap tung phan tu cho mang: 8 3 6 2 5 2 4
tong = 15
```
#### Output:
```
Pair not found
```

