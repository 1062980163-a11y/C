from ultralytics import YOLO
import cv2

model = YOLO("yolov8n.pt")

results = model("text.jpg")

for res in results:
    img = res.plot()
    cv2.imshow("其实这是猫", img)

cv2.waitKey(0)
cv2.destroyAllWindows()
print("检测完成")