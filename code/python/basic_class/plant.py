class Plant:
  def __init__(self, common_name, scientific_name):
    self.common_name = common_name
    self.scientific_name = scientific_name

plant1 = Plant("Common haircap moss","Polytrichum commune")

print(plant1.common_name)
del plant1
