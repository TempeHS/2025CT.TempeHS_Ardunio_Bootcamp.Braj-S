bool gameOver () {
if (y <= 11 || y >= 59 || x <= 1 || x >= 119 )
{
  u8g2.setCursor(0, 10);
  u8g2.print("Game Over");
  return true;
}
  else
{
  return false;
}
}