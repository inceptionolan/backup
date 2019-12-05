<?php 

    if(!isset($_POST["antiForgeryToken"]))
    {
        header("location:36KaradDemo.html");
    }
?>

<!DOCTYPE html>
<html lang="en">
<head>
       <title>Document</title>
</head>
<body>
    <?php echo "Token you carry is: " . $_POST["antiForgeryToken"]; ?>
<?php echo "Welcome " .  $_POST["EName"];?><br>
<?php echo "Age is " .   $_POST["EAge"] ; ?><br>
<?php echo "EMail is " .   $_POST["EMail"] ;?><br>
</body>
</html>
