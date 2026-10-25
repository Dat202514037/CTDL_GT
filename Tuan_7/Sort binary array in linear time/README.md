# Sort binary array in linear time

## Mô tả bài toán
- Đầu vào: Một mảng số nguyên chỉ chứa hai giá trị 0 và 1.
- Đầu ra: Mảng số nguyên được sắp xếp theo thứ tự tăng dần sao cho tất cả các phần tử 0 đứng trước các phần tử 1

## Mô tả giải thuật
- Khởi tạo biến k = 0 để xác định vị trí cần đặt số 0.
- Duyệt lần lượt các phần tử của mảng từ đầu đến cuối. Nếu phần tử đang xét bằng 0, gán a[k] = 0 rồi tăng k lên 1.
- Sau khi duyệt hết mảng, các vị trí từ k đến n - 1 được gán giá trị 1.
- In mảng sau khi sắp xếp.

**Độ phức tạp thuật toán $O(n)$**

## Test case
### Case 1:
#### Input:
```
1, 0, 1, 0, 1, 0, 0, 1
```
#### Output:
```
0 0 0 0 1 1 1 1
```
---
### Case 2:
#### Input:
```
0, 0, 1, 0, 1, 1, 0, 1, 0, 0 
```
#### Output:
```
0 0 0 0 0 0 1 1 1 1  
```
