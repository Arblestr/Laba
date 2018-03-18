## Цель
Создать в ХД новую сущность "Информация по обработке заявки".

## Функциональные требования
1. Создать новую сущность "Информация по обработке заявки", отобразив ее в модели в виде следующих объектов:
    - <a href="#"><a href="#"><a href="#">INTEGRATION</a> (заявка). Поля (информацию взять из <a href="#"><a href="#">siebel_data</a>):
        - integration_id
        - source
        - created
   
    - <a href="#"><a href="#">PROGRESS</a> (обработка заявки). Поля (информацию взять из <a href="#"><a href="#">bpm_data</a>):
        - app_id
        - inserted
        - loop_id
        - work_time (время обработки заявки на данном этапе) - получить, вычислив разницу между значениями полей                                                                                          "inserted", ориентируясь по соответствующим значениям поля "loop_id"
                                                                   (пример - work_time i-ой заявки на j-ом этапе
    
    - <a href="#"><a href="#">ACCOUNT</a> (счет). Поля (информацию взять из <a href="#"><a href="#">prime_data</a>):
        - account_id
        - app_id
        - open_dt
        - credit_limit_amt
    
3. На основе <a href="#">bpm_data</a> провести подсчет и предоставить информацию о количестве заявок, не имеющих решения - отсутствие этапа ("stage") "утверждено"/"одобрено"/"отказ"/"отказано".

